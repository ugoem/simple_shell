#include "shell.h"
/**
 * shell - Infinite loop that runs shell
 * @argc: Arg count
 * @argv: array of arguments passed to shell at beginning of program
 * @env: Environment
 * Return: Void
 */
void shell(int argc, char **argv, char **env)
{
	char *line;
	char **args;
	int status = 1;
	char *tmp = NULL;
	char *er;
	char *filename;
	int flow;

	er = "Error";
	do {
		prompt();
		line = _getline();
		args = split_line(line);
		flow = bridge(args[0], args);
		if (flow == 2)
		{
			filename = args[0];
			args[0] = find_path(args[0], tmp, er);
			if (args[0] == er)
			{
				args[0] = search_cwd(filename, er);
				if (args[0] == filename)
					write(1, er, 5);
			}
		}
		if (args[0] != er)
			status = execute_prog(args, line, env, flow);
		free(line);
		free(args);
	} while (status);
	if (!argc)
		(void)argc;
	if (!argv)
		(void)argv;
	if (!env)
		(void)env;
}

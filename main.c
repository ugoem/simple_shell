#include "shell.h"

/**
 * main - Entry point for shell, handles args to shell
 * @argc: Arg count
 * @argv: Arr of args
 * @env: Environment
 * Return: 0;
 */
int main(int argc, char **argv, char **env)
{
	if (!argc)
		(void)argc;
	if (!argv)
		(void)argv;
	if (!env)
		(void)env;
	shell(argc, argv, env);
	return (0);
}

#include "shell.h"

/**
 * help_env - dispaly information on the shellby builtin command 'env'.
 */

void help_env(void)
{
	char *msg = "env: env\n\tPrints the current enviroment.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * help_setenv - Dispaly informations on the shellby command 'set_env'.
 */

void help_setenv(void)
{
	char *msg = "setenv: setenv [VARIBLE] [value]\n\t Inisializes a new";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "enviroment varible, or modifie on existing one.\n\n";
	write(STDOUT_FILNO, msg, _strlen(msg));
	msg = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * help_unsetenv - Display information on the shellby builtin comand
 * 'unsetenv'
 *
 */

void help_unsetenv(void)
{
	char *msg = "unsetnv: unsetenv [VARIBLE]\n\tRemoves an ";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environmental varible.\n\n\tUpon failure prints a";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void	child(char argv*[], char *envp[], int *fd)
{
	int	file;

	file = open(argv[1], 0_RDONLY, 0777);
	if (file == -1)
		error();
	dup2(fd[1], STDOUT_FILENO);
	dup2(file, STDOUT_FILENO);
	close(fd[0]);
	execute(argv[2], envp);
}

int	main(int argc, char *argv[], char *envp[])
{
	int		fd[2];
	pid_t	pid1;

	if (argc != 5 || !argv[0] || !argv[1] || !argv[2] || !argv[3])
	{
		ft_putstr_fd("\033[31mError: Bad arguments\n\e[0m", 2);
		ft_putstr_fd("Ex: ./pipex <file1> <cmd1> <cmd2> <file2>\n", 1);
	}
	else
	{
		if (pipe(fd) == -1)
			error();
		pid1 = fork();
		if (pid1 == -1)
			error();
		if (pid1 == 0)
			child(argv, envp, fd);
		waitpid(pid1, NULL, 0);
		parent(argv, envp, fd);
	}

	char *file1, *file2, *cmd1, *cmd2;
	file1 = argv[0];
	file2 = argv[2];
	cmd1 = argv[1];
	cmd2 = argv[3];

	open

	return (0);
}




/*
Your program will be executed as follows:
./pipex file1 cmd1 cmd2 file2
It must take 4 arguments:
• file1 and file2 are file names.
• cmd1 and cmd2 are shell commands with their parameters.
It must behave exactly the same as the shell command below:
$> < file1 cmd1 | cmd2 > file2
5
Pipex
III.1 Examples
$> ./pipex infile "ls -l" "wc -l" outfile
Should behave like: < infile ls -l | wc -l > outfile
$> ./pipex infile "grep a1" "wc -w" outfile
Should behave like: < infile grep a1 | wc -w > outfile*/
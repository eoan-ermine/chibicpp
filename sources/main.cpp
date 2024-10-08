#include <fmt/format.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		fmt::println("{}: invalid number of arugment", argv[0]);
		return 1;
	}

	fmt::println("\t.globl main");
	fmt::println("main:");
	fmt::println("\tmov ${}, %rax", std::atoi(argv[1]));
	fmt::println("\tret");
}
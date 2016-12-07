#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

// Program name.
const char* program_name;

// Programın kullanılışını özel bir dosyaya yaz. (stdout, stderr) Ve programdan exit_code ile çıkış yap.
void print_usage(FILE* stream, int exit_code){
	fprintf(stream, "Usage: %s options [ inputfile ... ]\n", program_name );
	fprintf(stream, 
			"	-h --help		Display this usage information.\n"
			"	-o --output		Write output to file.\n"
			"	-v --verbose 	Print verbose messages.\n" );
	exit(exit_code);
}



int main(int argc, char* argv[])
{
	int next_option;

	// Bir stringte, geçerli kısa optionlar.
	const char* const short_options = "ho:v";
	// Struct yapısında, uzun optionlar.
	const struct option long_options[] = {
		{"help", 0, NULL, 'h'},
		{"output", 1, NULL, 'o'},
		{"verbose", 0, NULL, 'v'},
		{NULL,		0, NULL, 0} // Gereklidir.
	};

	// Yazılan ifadelerin, hangi dosyaya yazılacagını belirt. NULL : stdout
	const char* output_filename = NULL;

	// Verbose degeri 
	int verbose = 0;

	// program_name degerini ata
	program_name = argv[0];

	do{
		next_option = getopt_long (argc, argv, short_options, long_options, NULL);
		switch(next_option){
			case 'h': // -h or --help. Print usage of program to the stdout with 0 exit code.
				print_usage(stdout, 0);
				break;

			case 'o': // -o --output. Dosya adını atama işlemini gerçekleştir.
				output_filename = optarg;
				break;

			case 'v': // -v --verbose
				verbose = 1;
				break;

			case '?': // ilginç bir deger gelmişse, kullanımı ekrana yazdır ve anormal bir çıkış değeri döndür
				print_usage(stderr, 0);

			case -1: // Herşey yolunda gitmiş ve argümanlar alınmış.
				break;

			default: // Tahmin edilemeyen bir şey olduysa.
				abort();
		}
	}
	while(next_option != -1);

	if(verbose){
		int i;
		for (i = optind; i < argc; i++){
			printf("Argument: %s\n", argv[i]);
		}
	}
	return 0;
}
	
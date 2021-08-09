float f() {
  int x = 10$15;
		float ponto = .91;
		write("Gabriel");
		write('a');

		/*
			Comentário de múltiplas linhas 
		*/

		//Comentário de Linha Legal

	                     
   return 1;
}

int main() {

	writeln("Digite os numero de elementos da lista: ");

	f();

	int n;
	float list FL10;
	read(n);
	
	IL  = read_list(n);
	FL = succ >> IL;

	FL10 = leq_10 <<  FL;
	if (FL10 != NIL) {
		float list AUXL;
		int n; n = 0 * ##;
		for (AUXL=FL10; AUXL != NIL; AUXL = !AUXL) {
			n = n + 1;
			write(?AUXL); write(" ");
		}
		writeln(" ");
		write("A nova lista tem "); write(n); writeln(" elementos.");
	}
	else writeln("A nova lista não possui elementos.");

	return 0;
}
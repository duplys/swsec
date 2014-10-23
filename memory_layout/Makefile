all:
	gcc simple.c -o simple.out
	gcc global.c -o global.out
	gcc global_static.c -o global_static.out
	gcc global_static_initialized.c -o global_static_initialized.out
	gcc global_initialized_static_initialized.c -o global_initialized_static_initialized.out
	size simple.out
	size global.out
	size global_static.out
	size global_static_initialized.out
	size global_initialized_static_initialized.out

clean:
	rm -f *~ *.out
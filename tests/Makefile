OUT_DIR := ../out

test: setup_test
	@make -C .. slibc.a
	@ld -melf_i386 $(OUT_DIR)/slibc.a $(OUT_DIR)/sum.gas.o -o $(OUT_DIR)/test_slibc
	@$(OUT_DIR)/test_slibc | grep 5050
	@echo "Pass"

setup_test: $(OUT_DIR)/sum.gas.o

# setup sum for testing
$(OUT_DIR)/sum.gas.o: sum.c
	gcc sum.c -m32 -c -o $(OUT_DIR)/sum.gas.o



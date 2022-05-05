/* shared helpers for virtual/physical memory callbacks */
void panda_callbacks_mem_before_read(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t data_size, void *ram_ptr){}
void panda_callbacks_mem_after_read(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t data_size, uint64_t result, void *ram_ptr){}
void panda_callbacks_mem_before_write(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t data_size, uint64_t val, void *ram_ptr){}
void panda_callbacks_mem_after_write(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t data_size, uint64_t val, void *ram_ptr){}

/* invoked from cpu-exec.c */
void panda_callbacks_before_find_fast(void){}
bool panda_callbacks_after_find_fast(CPUState *cpu, TranslationBlock *tb, bool bb_invalidate_done, bool *invalidate){}

/***************************************************************************
 *                   AUTOGENERATED CONTENTS - DO NOT EDIT                  *
 ***************************************************************************/
//-AUTOGENERATED BEGIN-
/* invoked from TBA */
int panda_callbacks_insn_exec(CPUState *env, target_ptr_t pc){}
int panda_callbacks_after_insn_exec(CPUState *env, target_ptr_t pc){}
int panda_callbacks_monitor(Monitor *mon, const char *cmd){}
int panda_callbacks_before_loadvm(void){}
void panda_callbacks_replay_hd_transfer(CPUState *env, uint32_t type, target_ptr_t src_addr, target_ptr_t dest_addr, size_t num_bytes){}
void panda_callbacks_after_machine_init(CPUState *env){}
void panda_callbacks_after_loadvm(CPUState *env){}

/* invoked from cpu-exec.c */
void panda_callbacks_before_block_exec(CPUState *env, TranslationBlock *tb){}
void panda_callbacks_after_block_exec(CPUState *env, TranslationBlock *tb, uint8_t exitCode){}
void panda_callbacks_before_block_translate(CPUState *env, target_ptr_t pc){}
void panda_callbacks_after_block_translate(CPUState *env, TranslationBlock *tb){}
void panda_callbacks_after_cpu_exec_enter(CPUState *env){}
void panda_callbacks_before_cpu_exec_exit(CPUState *env, bool ranBlock){}

/* invoked from cpu-exec.c (indirectly) */
bool panda_callbacks_before_block_exec_invalidate_opt(CPUState *env, TranslationBlock *tb){}

/* invoked from cpus.c */
void panda_callbacks_top_loop(CPUState *env){}
void panda_callbacks_during_machine_init(MachineState *machine){}
void panda_callbacks_main_loop_wait(void){}
void panda_callbacks_pre_shutdown(void){}
bool panda_callbacks_unassigned_io_read(CPUState *env, target_ptr_t pc, hwaddr addr, size_t size, uint64_t *val){}
bool panda_callbacks_unassigned_io_write(CPUState *env, target_ptr_t pc, hwaddr addr, size_t size, uint64_t val){}
int32_t panda_callbacks_before_handle_exception(CPUState *cpu, int32_t exception_index){}
int32_t panda_callbacks_before_handle_interrupt(CPUState *cpu, int32_t exception_index){}
void panda_callbacks_cbaddr(void){}

/* invoked from cputlb.c */
void panda_callbacks_mmio_after_read(CPUState *env, target_ptr_t physaddr, target_ptr_t vaddr, size_t size, uint64_t *val){}
void panda_callbacks_mmio_before_write(CPUState *env, target_ptr_t physaddr, target_ptr_t vaddr, size_t size, uint64_t *val){}
void panda_callbacks_hd_read(CPUState *env){}
void panda_callbacks_hd_write(CPUState *env){}

/* invoked from exec.c */
void panda_callbacks_replay_before_dma(CPUState *env, const uint8_t *buf, hwaddr addr, size_t size, bool is_write){}
void panda_callbacks_replay_after_dma(CPUState *env, const uint8_t *buf, hwaddr addr, size_t size, bool is_write){}

/* invoked from panda/src/rr/rr_log.c */
void panda_callbacks_replay_handle_packet(CPUState *env, uint8_t *buf, size_t size, uint8_t direction, uint64_t buf_addr_rec){}
void panda_callbacks_replay_net_transfer(CPUState *env, uint32_t type, uint64_t src_addr, uint64_t dest_addr, size_t num_bytes){}
void panda_callbacks_replay_serial_receive(CPUState *env, target_ptr_t fifo_addr, uint8_t value){}
void panda_callbacks_replay_serial_read(CPUState *env, target_ptr_t fifo_addr, uint32_t port_addr, uint8_t value){}
void panda_callbacks_replay_serial_send(CPUState *env, target_ptr_t fifo_addr, uint8_t value){}
void panda_callbacks_replay_serial_write(CPUState *env, target_ptr_t fifo_addr, uint32_t port_addr, uint8_t value){}

/* invoked from panda/target/ARCH/translate.c */
bool panda_callbacks_insn_translate(CPUState *env, target_ptr_t pc){}
bool panda_callbacks_after_insn_translate(CPUState *env, target_ptr_t pc){}

/* invoked from target/i386/helper.c */
bool panda_callbacks_asid_changed(CPUState *env, target_ptr_t oldval, target_ptr_t newval){}

/* invoked from target/i386/misc_helper.c */
bool panda_callbacks_guest_hypercall(CPUState *env){}

/* invoked from translate-all.c */
void panda_callbacks_cpu_restore_state(CPUState *env, TranslationBlock *tb){}
void panda_callbacks_before_tcg_codegen(CPUState *env, TranslationBlock *tb){}
void panda_callbacks_start_block_exec(CPUState *env, TranslationBlock *tb){}
void panda_callbacks_end_block_exec(CPUState *env, TranslationBlock *tb){}
void panda_install_block_callbacks(CPUState* cpu, TranslationBlock* tb){}

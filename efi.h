#ifndef EFI_H
#define EFI_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

char* boot_entry_name(uint16_t id);
int boot_entry_list(uint16_t **list);
int set_boot_next(uint16_t num);
void efi_init();

#ifdef __cplusplus
}
#endif
#endif // EFI_H

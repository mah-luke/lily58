KEYMAP=keyboards/splitkb/aurora/lily58/keymaps/mah-luke
HEX=splitkb_aurora_lily58_rev2_lily58.hex

.PHONY: json2c
json2c: $(KEYMAP)/keymap.c

.PHONY: compile
compile: $(HEX)

.PHONY: flash
flash: $(HEX)
	qmk flash

.PHONY: mount
mount:
	udisksctl mount -b /dev/sdd1

$(KEYMAP)/keymap.c: lily58.json
	qmk json2c lily58.json > keyboards/splitkb/aurora/lily58/keymaps/mah-luke/keymap.c

$(HEX): $(KEYMAP)/keymap.c
	qmk userspace-compile


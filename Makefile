KEYMAP=keyboards/splitkb/aurora/lily58/keymaps/mah-luke
HEX=splitkb_aurora_lily58_rev2_lily58.hex

.PHONY: all
all: flash c2json

.PHONY: json2c
json2c: $(KEYMAP)/keymap.c

.PHONY: c2json
c2json: $(KEYMAP)/keymap.c
	qmk c2json $< > lily58.json

.PHONY: compile
compile: $(HEX)

.PHONY: flash
flash: $(HEX)
	qmk flash

.PHONY: mount
mount:
	udisksctl mount -b /dev/sdd1

$(KEYMAP)/keymap.c:
	qmk json2c lily58.json > $@

$(HEX): $(KEYMAP)/keymap.c
	qmk compile


# QMK config for Lily58
My keymap is based on the [default layout](https://github.com/qmk/qmk_firmware/tree/master/keyboards/splitkb/aurora/lily58) by [splitkb](https://splitkb.com/).

## Features
- 3 Layers with an option to upgrade to 5 layers.
- RALT umlaute emulation on Layer 2.
- Numpad for left hand on Layer 3.
- 2 encoders used for:
    - Layer 0: Mouse wheel and Volume
    - Layer 1: Mouse emulation (up/down, left/right)
    - Layer 2: Page up/down
    - Layer 3: RGB lighting (hue, saturation)

## Layers
![Layer 0](./layers/0_BASE.png)

![Layer 1](./layers/1.png)

![Layer 2](./layers/2.png)

![Layer 3](./layers/3.png)

## Build
Setup qmk, then compile and flash using
```bash
make flash
```

Once the compilation is finished and qmk is waiting
for the drive of the microcontroller to flash the firmware to,
execute following command which will mount `/dev/sdd1` and allows
qmk to flash it.
```bash
sleep 5 && make mount
```
> [!NOTE]
> The sleep allows you to quickly double tap the reset button on your
> controller, allowing you to flash the keyboard without having to
> fall back to another keyboard to execute the mount command.

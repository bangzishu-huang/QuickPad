# quickpad

*A 5 key macro pad with a rotary encoder that is made in order to enhance productivity when working in documents (ex. copy and paste commands). There is a little extrusion on the top of the macropad, and it's intended for you to put a little figurine or anything of your choice on it (acts as a mini stand)!*

* Keyboard Maintainer: [bangzishu-huang](https://github.com/bangzishu-huang)
* Hardware Supported: *Seeed XIAO RP2040*
* Hardware Availability: *https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html*

Make example for this keyboard (after setting up your build environment):

    make quickpad:default

Flashing example for this keyboard:

    make quickpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

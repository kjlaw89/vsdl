## VSDL 0.6.1
*26 Dec 2020*

- Updated to run with latest version of V
- Moved RWops to `vsdl.system` module
- Added some basic documentation for tVintris demo
- Moved `gl`, `vulkan` and `platform` files to their own modules
  - `gl` and `vulkan` will auto-initialize on load now
  - `gl` example has been updated to reflect changes
- Generated `_docs` folder for all module documentation

## VSDL 0.6.0
*6 Oct 2020*

- Added in support for the `mixer` extension and a new `mixer` example. Also added additional keyboard key values.

## VSDL 0.5.0
*3 Oct 2020*

- Initial release with all of the expected base functionality

- gfx
- events (partial)
- input
- controller
- audio (basic, not mixer)
- ttf
- image
- rwops
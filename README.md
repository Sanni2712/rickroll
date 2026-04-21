# rickroll
## Rickroll coded in C <br>
`rick.exe` -> essentially just offline version of
```
curl ascii.live/rick
```
<br>
The ASCII frames taken from this curl stream and adjusted few parameters to display the rickroll frame by frame smoothly in the terminal.<br>
Streams pre-encoded ASCII frames directly to the console using fwrite(), works on lab computers without internet.<br>

## Usage
Open the the folder containing `.exe` of any any app (preferably from the shortcut's target on the desktop by going into properties, or by using the `where <appname>` in the command line) and rename the orignal `.exe` for backup (ex- `eclipse.exe` -> `eclipse_og.exe`) and drop the `rick.exe` in the folder and rename it to the orignal (ex- `rick.exe` -> `eclipse.exe`, `rick.exe` -> `jupyter-notebook.exe`) <br>

Now everytime the app is opened, it streams the ASCII frames in a terminal.

<img src="https://cdn.jumpshare.com/preview/SAauG1mN-W4tIDHqsDpAKGOSqrK3YFx3PhkmJ3qTfmaqSYArI6Xabd_F6lTie7eBwbsdw6Z_0WZdrAMxFDb4N30-bSTjtTK0TKyeJ1JKGyQ" width="500">
<br>

Additionally you may also create a shortcut for the `rick.exe` and add it in startups folder on the victim's computer<br> (Win + R -> `shell : startup`).

## Compilation
Output from `curl ascii.live/rick` is pasted into a text file and
converted into an unsigned char array in a C header `rick.h` using `xxd -i` (works on git bash if on windows), header then included in the main C program
and compiled into a single `.exe`.
<br>

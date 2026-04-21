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

<br>
Now everytime the app is opened, it streams the ASCII frames in a terminal.

```
LLLffttfttttffffffttft111i,ii1ttfffftttffffffffffft111tft1ttft11tffLft
LLLfttttffffffffftft1i:::,,,,::,,1fftttfffffffffftt1111111ttfttttttttt
LLLfttfftfLffftfffLf1,,,,,,,,::,,:1tttttttffffffftt1111ttt1ttt1ttfttt1
fffftfLfftttfffffLLf1,,,,,iiiii:,:1tfffft11tfffft11111tffft1tt11tt1ttt
fttttfffffttfLLLffLfiiiii111111i::1tffffft11tttt1ttt11tfffttffft1ttfft
ttttttttttttfffLffLfii,,,iiiiiii,:1ftffffftt1ttt1111111ffftffffttttttt
ffffffffttfttffLfffLti,:,,ii,ii1,,ttffffftttttffft11111tfttffftttttttt
ffffffftttfftttftttt1i,,,ii11111ii1ttffft11ttttffft1111tt1tffttffttfff
ffffffftttttt111tfff1ii,,,iiiiiii1111tt111tffttttft11111tt1ttttfft1tff
fffffftt1ttt1111tffft1i,,,iiiiii,,i111111tfffft11t11111tfft1tttttt1tff
tttttt1ttfft1111tttftt1,,,iiiiii,:,tt11ttftfffft1111111ttttt1ttfft11tt
tttt11tfffft1tt11ttft11,,,,,iiii,,,1t11ttttffftt11t1111tftt1tt1tffftt1
tttft1ttfffttfft11tftiii,,,,iiii,,,,:,ii1tttft111tt1111ttt11tt1tffffft
ttttt11tfftttfttt11i:,ii,,,,,iii,i:.....,,::,i111t11111tt111tft1ffffft
fttt1111tft1ft1i,:,...,1i,,,,,,i11:...........,,1111111111t11tt1tffftt
ft11ttt111111,:,......,111ii,,i1t1:........,,...,11t1111111111tttffttt
111ttttt11,:,.........,i111i,i1t1,,.............,1t1111111tttt11t1tfLf
111ttt11ti,............,::::,,,i,:,..............it111111tttffttttfLLL
11ttttttti...............,,,,,,,,:...............:t111111tttffftttffff
11ttttttt,...............,:,,,,:::...............,1t111111ttffttttffLL
11ttttttt:................,,,,,:::................it1111111ttt1tttffLL
11ttttttt:................,:,,::::................:t1111tt111tttttffLL
11111tt1t,.................,::::::................,1t111ttt11tftttffff
11ttttttt:.,:,:............,::::::................,itt111t111ttt1ttttt
1tttttttt,:,iii:............,:::::...........,:,....:1t11111tttt11tfff
11ttttttt,,iiiii:. ..........:::::...........,,,,,:..it1111tft1111tttt
11ttttttt:,iiiii,............,::::,........,::,,iii,it111ttttt11111tt1
111111111:,,iiii,,...........,:,::,.........,,,iiii,it1111111111111111
111111111,:,:,,,,............,::::,...........:,,ii,it1111111111111111
111111111,::.... .............,:::,,.........  .,,:i1t1111111111111111
111111111i,,..................,,,:,,....... .,,..,,1111111111111111111
1111111111i,:,i,,..............,,:,,,........1tii11t111111111111111111
```

Additionally you may also create a shortcut for the `rick.exe` and add it in startups folder on the victim's computer<br> (Win + R -> `shell : startup`).

## Compilation
Output from `curl ascii.live/rick` is pasted into a text file and
converted into an unsigned char array in a C header `rick.h` using `xxd -i` (works on git bash if on windows), header then included in the main C program
and compiled into a single `.exe`.
<br>

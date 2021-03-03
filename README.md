# CLIG FRAME  
  
a really really simple frame to develop console game  
  
- games witch were developed by this frame  
    - CLI_GAME (with frame in v1.0)  
    https://github.com/HIBICUSbaka/CLI_Game  
    - VIRTUAL RESORTER (with frame in v2.0)  
    https://github.com/HIBICUSbaka/HEW_GAME  
  
- sample  
    this frame has a simple sample scene and ui inside  
    you can turn off the showing of ui by commenting the flag in DefineValues.h name SHOW_SAMPLE_UIOBJECT  
    this sample show a easy way to show thing in scene and the interaction between each ui  
  
- database  
    for some personal reason, this frame has a use to connect maria-database with its C connector lib  
    so before you build executable file and run it, please copy CLIG\\CLIG_FRAME\\Assets\\Libs\\MariaDB Connector C\\lib\\libmariadb.dll  
    to the folder you going to build in  
  
- the function included in this frame  
    - a main loop by GameApp.h  
    - a fast way to print by ConsolePrint.h (in black-white way, you can show colorful things by AppPostPrint() in CustomizedApp.h, but usually it cannot be fully printed by 60 fps)  
    - serval customizable function in CustomizedApp.h, you can do game's initialize, updating, dispatching of keyboard input and button event, post printing and turning off here  
    - can play sounds by SoundManager.h  
    - a simple way to genarte logs by LogsOutput.h  
    - a simple solution to manage a part of game in scene by SceneNode.h and SceneManager.h  
    - a way to show ascii sprite or sprite animate (this is used widly in the scecond game https://github.com/HIBICUSbaka/HEW_GAME )  
  
- filters in the project file  
    - Source and Header: the basic parts of this frame  
    - GameApp: advanced function witch base on basic parts  
    - GameScene: to hold the declarations of each scene  
    - Lib: third party libs
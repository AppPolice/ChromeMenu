ChromeMenu.Framework
====================

Mac OS X Framework that implements the functionality of AppKit's NSMenu and NSMenuItem.  
It is a core part of the ``AppPolice`` application that builds its functionality around ``ChromeMenu`` interface.  
``AppPolice`` links against this framework during runtime, so if you are clonning ``AppPolice`` make sure to clone ``ChromeMenu`` repository as well.

NSMenu provides a somewhat limited API as to the ability to change its behaviour. The purpose of ``ChromeMenu.Framework`` is to give a fine-grained control of menu representaion.
Note however that not all NSMenu methods were implemented--only those that provide the necessary functionality for the ``AppPolice`` app.

## Install

Framework can be installed either privately within application or to a local Frameworks directory.

## Use

ChromeMenu classes:

```
CMMenu
CMMenuItem
```

//
//  AppDelegate.swift
//  SwiftAndC
//

import Cocoa
import Foundation

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {

    @IBOutlet weak var window: NSWindow!
    
    func applicationDidFinishLaunching(aNotification: NSNotification) {
        print("application did finish launching. \n")
        mycfunc()
    }

    func applicationWillTerminate(aNotification: NSNotification) {
    }


}


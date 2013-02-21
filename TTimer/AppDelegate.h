//
//  AppDelegate.h
//  TTimer
//
//  Created by Fedor Zajac on 11.2.2013.
//  Copyright (c) 2013 Fedor Zajac. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    NSTimer *timer;
}
@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@property (weak) IBOutlet NSTextField *lab;
@property (weak) IBOutlet NSProgressIndicator *bar2;

@property (weak) IBOutlet NSButton *bt15;
@property (weak) IBOutlet NSButton *bt3;
@property (weak) IBOutlet NSButton *bt1_5;
@property (weak) IBOutlet NSButton *bt0_5;


- (IBAction)saveAction:(id)sender;

@end

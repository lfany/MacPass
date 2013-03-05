//
//  MPMainWindowController.h
//  MacPass
//
//  Created by Michael Starke on 24.07.12.
//  Copyright (c) 2012 HicknHack Software GmbH. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MPViewController;
@class MPEntryViewController;
@class MPInspectorTabViewController;
@class MPPasswordInputController;
@class MPOutlineViewController;

@interface MPMainWindowController : NSWindowController

@property (readonly, retain) MPPasswordInputController *passwordInputController;
@property (readonly, retain) MPEntryViewController *entryViewController;
@property (readonly, retain) MPOutlineViewController *outlineViewController;
@property (readonly, retain) MPInspectorTabViewController *inspectorTabViewController;


- (void)showEntries;
- (void)showMainWindow:(id)sender;
- (void)performFindPanelAction:(id)sender;
- (void)clearOutlineSelection:(id)sender;
/*
 Clears the Search filter
 */
- (void)clearFilter:(id)sender;
- (void)toggleInspector:(id)sender;

@end
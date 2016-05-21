//
//  SuperTool+TunniEditing.h
//  SuperTool
//
//  Created by Simon Cozens on 21/05/2016.
//  Copyright © 2016 Simon Cozens. All rights reserved.
//

#import "SuperTool.h"

@interface SuperTool (TunniEditing)

- (void)initTunni;
- (void) addTunniToContextMenu:(NSMenu*)theMenu;
- (void) displayTunniState;
- (void)balance;
- (void)drawTunniLinesForSegment:(NSArray*)seg;
- (void)drawTunniBackground:(GSLayer*)Layer;

@end

//
//  PlayerViewController.h
//  Douyu
//
//  Created by Grayon on 2017/9/21.
//  Copyright © 2017年 Lanskaya. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <mpv/client.h>
#import "DYRoomInfo.h"
#import "BarrageRenderer.h"
#import "MpvClientOGLView.h"

@interface PlayerViewController : NSViewController

@property (assign) mpv_handle *mpv;
@property (weak) IBOutlet MpvClientOGLView *glView;
@property (strong) BarrageRenderer *barrageRenderer;

- (void)loadPlayerWithInfo:(DYRoomInfo *)info withVideoQuality:(NSInteger)quality;
- (void)destroyPlayer;
@end

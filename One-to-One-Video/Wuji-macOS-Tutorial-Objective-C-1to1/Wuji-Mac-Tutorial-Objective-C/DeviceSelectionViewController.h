//
//  DeviceSelectionViewController.h
//  Wuji Mac Tutorial Objective-C
//
//  Created by 3 on 2020/12/17.
//  Portions Copyright (c) 2020 wuji-co. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WujiRTCFramework/WujiRTCFramework.h>

@interface DeviceSelectionViewController : NSViewController <WujiRtcEngineDelegate>

@property (strong, nonatomic) WujiRtcEngineKit *wujiKit;

@end

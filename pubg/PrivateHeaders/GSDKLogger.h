//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSDKLogger : NSObject
{
    _Bool _enableLog;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001004f2110
@property(nonatomic) _Bool enableLog; // @synthesize enableLog=_enableLog;
- (void)gsdkNotify:(id)arg1;	// IMP=0x00000001004f2234
- (void)gsdkLog:(id)arg1;	// IMP=0x00000001004f2190

@end

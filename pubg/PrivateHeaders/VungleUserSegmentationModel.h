//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "VNGPersistable.h"

@class NSDictionary, NSString;

@interface VungleUserSegmentationModel : NSObject <NSCoding, VNGPersistable>
{
    _Bool _payingUser;	// 8 = 0x8
    _Bool _viral;	// 9 = 0x9
    unsigned long long _daysInApp;	// 16 = 0x10
    unsigned long long _consecutiveDaysInApp;	// 24 = 0x18
    unsigned long long _adsClicked;	// 32 = 0x20
    unsigned long long _lastOpen;	// 40 = 0x28
}

+ (id)key;	// IMP=0x0000000100add678
+ (id)category;	// IMP=0x0000000100add64c
+ (long long)channel;	// IMP=0x0000000100add644
@property(nonatomic) unsigned long long lastOpen; // @synthesize lastOpen=_lastOpen;
@property(nonatomic, getter=isViral) _Bool viral; // @synthesize viral=_viral;
@property(nonatomic) unsigned long long adsClicked; // @synthesize adsClicked=_adsClicked;
@property(nonatomic) unsigned long long consecutiveDaysInApp; // @synthesize consecutiveDaysInApp=_consecutiveDaysInApp;
@property(nonatomic) unsigned long long daysInApp; // @synthesize daysInApp=_daysInApp;
@property(nonatomic, getter=isPayingUser) _Bool payingUser; // @synthesize payingUser=_payingUser;
- (id)persistenceKey;	// IMP=0x0000000100add6ec
- (id)persistenceCategory;	// IMP=0x0000000100add6c8
- (long long)persistenceChannel;	// IMP=0x0000000100add6a4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100add508
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100add3c4
@property(readonly, nonatomic) NSDictionary *jsonDictionary;
- (id)init;	// IMP=0x0000000100add0b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

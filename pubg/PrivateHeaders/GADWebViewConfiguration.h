//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface GADWebViewConfiguration : NSObject <NSCopying>
{
    _Bool _mediaPlaybackRequiresUserAction;	// 8 = 0x8
    _Bool _scalesPageToFit;	// 9 = 0x9
    _Bool _GMSGScriptHandlerEnabled;	// 10 = 0xa
    _Bool _resizeScriptEnabled;	// 11 = 0xb
    _Bool _loadOnIframeScriptEnabled;	// 12 = 0xc
    unsigned long long _dataDetectorType;	// 16 = 0x10
    NSString *_webViewClassKey;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool loadOnIframeScriptEnabled; // @synthesize loadOnIframeScriptEnabled=_loadOnIframeScriptEnabled;
@property(readonly, nonatomic) _Bool resizeScriptEnabled; // @synthesize resizeScriptEnabled=_resizeScriptEnabled;
@property(readonly, nonatomic) _Bool GMSGScriptHandlerEnabled; // @synthesize GMSGScriptHandlerEnabled=_GMSGScriptHandlerEnabled;
@property(copy, nonatomic) NSString *webViewClassKey; // @synthesize webViewClassKey=_webViewClassKey;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(nonatomic) unsigned long long dataDetectorType; // @synthesize dataDetectorType=_dataDetectorType;
- (void).cxx_destruct;	// IMP=0x0000000100a22c14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a22a84
- (id)init;	// IMP=0x0000000100a22a74
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000100a226d8

@end

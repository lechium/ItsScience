//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface TSETweet : NSObject <NSCopying>
{
    NSNumber *_inReplyToTweetID;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    id <TSETweetAttachment> _attachment;	// 24 = 0x18
    id <TSEGeoPlace> _place;	// 32 = 0x20
}

+ (id)emptyTweet;	// IMP=0x0000000100892518
+ (Class)twitterText;	// IMP=0x0000000100892384
+ (void)setTwitterText:(Class)arg1;	// IMP=0x0000000100892378
@property(retain, nonatomic) id <TSEGeoPlace> place; // @synthesize place=_place;
@property(retain, nonatomic) id <TSETweetAttachment> attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSNumber *inReplyToTweetID; // @synthesize inReplyToTweetID=_inReplyToTweetID;
- (void).cxx_destruct;	// IMP=0x0000000100892b40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008929bc
- (_Bool)isNearOrOverCharacterLimit;	// IMP=0x0000000100892940
- (_Bool)isWithinCharacterLimit;	// IMP=0x00000001008928c4
- (long long)remainingCharacters;	// IMP=0x000000010089284c
- (id)textWithLeadingUsernames:(id)arg1 hashtags:(id)arg2 text:(id)arg3;	// IMP=0x000000010089255c
- (id)initWithInReplyToTweetID:(id)arg1 text:(id)arg2 attachment:(id)arg3 place:(id)arg4 usernames:(id)arg5 hashtags:(id)arg6;	// IMP=0x0000000100892390

@end

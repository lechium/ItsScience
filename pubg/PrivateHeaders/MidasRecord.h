//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidasRecord : NSObject
{
    NSString *_recordContent;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (id)recordWithReports:(id)arg1;	// IMP=0x000000010055a9e4
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *recordContent; // @synthesize recordContent=_recordContent;
- (void).cxx_destruct;	// IMP=0x000000010055ac74
- (id)initWithContent:(id)arg1;	// IMP=0x000000010055a92c

@end

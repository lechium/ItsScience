//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@interface AWSMTLValueTransformer : NSValueTransformer
{
    CDUnknownBlockType _forwardBlock;	// 8 = 0x8
    CDUnknownBlockType _reverseBlock;	// 16 = 0x10
}

+ (Class)transformedValueClass;	// IMP=0x0000000100bd8b98
+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000100bd8b90
+ (id)reversibleTransformerWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100bd8a1c
+ (id)reversibleTransformerWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100bd8a0c
+ (id)transformerWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100bd89a4
@property(readonly, copy, nonatomic) CDUnknownBlockType reverseBlock; // @synthesize reverseBlock=_reverseBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType forwardBlock; // @synthesize forwardBlock=_forwardBlock;
- (void).cxx_destruct;	// IMP=0x0000000100bd8c4c
- (id)transformedValue:(id)arg1;	// IMP=0x0000000100bd8bac
- (id)initWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100bd8aa0

@end

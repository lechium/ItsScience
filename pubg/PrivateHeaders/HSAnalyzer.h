//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HSAnalyzer : NSObject
{
}

+ (id)buildFuzzyIndex:(id)arg1;	// IMP=0x000000010134d240
+ (void)generateAndAddStringsWithPageIndexTrie:(id)arg1 data:(id)arg2 index:(id)arg3 type:(int)arg4;	// IMP=0x000000010134d06c
+ (void)indexDocumentWithPageIndexTrie:(id)arg1 title:(id)arg2 body:(id)arg3 tags:(id)arg4 index:(id)arg5;	// IMP=0x000000010134ce6c
+ (void)analyzeFAQ:(id)arg1;	// IMP=0x000000010134ca8c
+ (id)termWeightForType:(int)arg1;	// IMP=0x000000010134ca10
+ (unsigned long long)boostForType:(int)arg1;	// IMP=0x000000010134c9f0

@end

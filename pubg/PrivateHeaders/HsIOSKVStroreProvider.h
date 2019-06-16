//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsKVStore.h"

@class NSString;

@interface HsIOSKVStroreProvider : NSObject <HsKVStore>
{
    id <HsDomainKVStore> _sharedKVStore;	// 8 = 0x8
    NSString *_domainName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001013beb48
- (void)destroyWithError:(id *)arg1;	// IMP=0x00000001013beb30
- (void)removeItemForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013beb00
- (void)setObject:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013bea94
- (void)setStringValue:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013bea28
- (void)setLongValue:(long long)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013be9f8
- (void)setIntValue:(int)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013be9c8
- (void)setFloatValue:(float)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013be998
- (void)setBooleanValue:(_Bool)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013be968
- (id)objectForKey:(id)arg1 withDefaultValue:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013be8b4
- (id)objectForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013be884
- (id)stringValueForKey:(id)arg1 withDefaultValue:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013be7d0
- (id)stringValueForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013be7a0
- (long long)longValueForKey:(id)arg1 withDefaultValue:(long long)arg2 withError:(id *)arg3;	// IMP=0x00000001013be73c
- (long long)longValueForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013be70c
- (int)intValueForKey:(id)arg1 withDefaultValue:(int)arg2 withError:(id *)arg3;	// IMP=0x00000001013be6a8
- (int)intValueForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013be678
- (float)floatValueForKey:(id)arg1 withDefaultValue:(float)arg2 withError:(id *)arg3;	// IMP=0x00000001013be618
- (float)floatValueForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013be5e8
- (_Bool)booleanValueForKey:(id)arg1 withDefaultValue:(_Bool)arg2 withError:(id *)arg3;	// IMP=0x00000001013be584
- (_Bool)booleanValueForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013be554
- (void)recreateStoreWithError:(id *)arg1;	// IMP=0x00000001013be524
- (id)initWithPlatform:(id)arg1 domainName:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013be450

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

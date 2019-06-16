//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HsPropertyValue, NSArray, NSDictionary, NSString;

@protocol HsPropertyStorage
- (NSDictionary *)getAllSecondaryPropertiesForIdentifier:(NSString *)arg1;
- (NSDictionary *)getUnsyncedSecondaryPropertiesForIdentifier:(NSString *)arg1;
- (NSDictionary *)getAllPropertiesForIdentifier:(NSString *)arg1;
- (NSDictionary *)getUnsyncedAndSyncedPropertiesForIdentifier:(NSString *)arg1;
- (NSDictionary *)getUnsyncedPropertiesForIdentifier:(NSString *)arg1;
- (void)setSyncStatus:(unsigned long long)arg1 forSecondaryKeys:(NSArray *)arg2 forIdentifier:(NSString *)arg3;
- (void)setSyncStatus:(unsigned long long)arg1 forSecondaryKey:(NSString *)arg2 forIdentifier:(NSString *)arg3;
- (void)setSyncStatus:(unsigned long long)arg1 forKeys:(NSArray *)arg2 forIdentifier:(NSString *)arg3;
- (void)setSyncStatus:(unsigned long long)arg1 forKey:(NSString *)arg2 forIdentifier:(NSString *)arg3;
- (void)deleteSecondaryProperty:(NSString *)arg1 forIdentifier:(NSString *)arg2;
- (HsPropertyValue *)getSecondaryProperty:(NSString *)arg1 forIdentifier:(NSString *)arg2;
- (void)setSecondaryProperty:(NSString *)arg1 toValue:(HsPropertyValue *)arg2 forIdentifier:(NSString *)arg3;
- (void)deleteProperty:(NSString *)arg1 forIdentifier:(NSString *)arg2;
- (HsPropertyValue *)getProperty:(NSString *)arg1 forIdentifier:(NSString *)arg2;
- (void)setProperty:(NSString *)arg1 toValue:(HsPropertyValue *)arg2 forIdentifier:(NSString *)arg3;
- (void)destroySecondaryStorageForIdentifier:(NSString *)arg1;
- (void)initSecondaryStorageForIdentifier:(NSString *)arg1;
- (void)destroyStorageForIdentifier:(NSString *)arg1;
- (void)initStorageForIdentifier:(NSString *)arg1;
@end

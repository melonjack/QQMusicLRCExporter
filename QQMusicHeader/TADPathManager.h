//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TADPathManager : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (id)getFullPath:(id)arg1 pathtype:(int)arg2;
- (id)getOrderCache:(BOOL)arg1;
- (id)getConfigCache:(BOOL)arg1;
- (id)getCacheDirectory;
- (id)getDocumentDirectory;
- (id)getImageCacheDirectory:(BOOL)arg1;

@end


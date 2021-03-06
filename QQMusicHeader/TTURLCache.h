//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TTURLCache : NSObject
{
    NSString *_name;
    NSString *_cachePath;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageSortedList;
    unsigned int _totalPixelCount;
    unsigned int _maxPixelCount;
    int _totalLoading;
    double _invalidationAge;
    BOOL _disableDiskCache;
    BOOL _disableImageCache;
}

+ (id)doubleImageURLPath:(id)arg1;
+ (id)cachePathWithName:(id)arg1;
+ (BOOL)createPathIfNecessary:(id)arg1;
+ (void)setSharedCache:(id)arg1;
+ (id)sharedCache;
+ (id)cacheWithName:(id)arg1;
@property(nonatomic) double invalidationAge; // @synthesize invalidationAge=_invalidationAge;
@property(nonatomic) unsigned int maxPixelCount; // @synthesize maxPixelCount=_maxPixelCount;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(nonatomic) BOOL disableImageCache; // @synthesize disableImageCache=_disableImageCache;
@property(nonatomic) BOOL disableDiskCache; // @synthesize disableDiskCache=_disableDiskCache;
- (long long)getFileCacheSize;
- (long long)fileSizeAtPath:(id)arg1;
- (void)logMemoryUsage;
- (void)invalidateAll;
- (void)invalidateKey:(id)arg1;
- (void)invalidateURL:(id)arg1;
- (void)removeAll:(BOOL)arg1;
- (void)removeKey:(id)arg1;
- (void)removeURL:(id)arg1 fromDisk:(BOOL)arg2;
- (id)moveDataFromPathToTemporaryURL:(id)arg1;
- (void)moveDataFromPath:(id)arg1 toURL:(id)arg2;
- (void)moveDataForURL:(id)arg1 toURL:(id)arg2;
- (id)storeTemporaryImage:(id)arg1 toDisk:(BOOL)arg2;
- (id)storeTemporaryFile:(id)arg1;
- (id)storeTemporaryData:(id)arg1;
- (void)storeEtag:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 forURL:(id)arg2;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)storeData:(id)arg1 forURL:(id)arg2;
- (id)etagForKey:(id)arg1;
- (id)imageForURL:(id)arg1 fromDisk:(BOOL)arg2;
- (id)imageForURL:(id)arg1;
- (BOOL)hasImageForURL:(id)arg1 fromDisk:(BOOL)arg2;
- (id)dataForKey:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (BOOL)hasDataForKey:(id)arg1 expires:(double)arg2;
- (id)dataForURL:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (id)dataForURL:(id)arg1;
- (BOOL)hasDataForURL:(id)arg1;
- (id)etagCachePathForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1;
- (id)cachePathForURL:(id)arg1;
- (id)keyForURL:(id)arg1;
@property(readonly, nonatomic) NSString *etagCachePath;
- (void)didReceiveMemoryWarning:(void *)arg1;
- (id)createUniqueTemporaryURL;
- (id)createTemporaryURL;
- (id)loadEtagFromCacheWithKey:(id)arg1;
- (id)loadImageFromDocuments:(id)arg1;
- (id)loadImageFromBundle:(id)arg1;
- (BOOL)imageExistsFromDocuments:(id)arg1;
- (BOOL)imageExistsFromBundle:(id)arg1;
- (void)storeImage:(id)arg1 forURL:(id)arg2 force:(BOOL)arg3;
- (void)expireImagesFromMemory;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSString, SongInfo;

__attribute__((visibility("hidden")))
@interface SongInfoWithNet : NSObject
{
    BOOL _isWifi;
    SongInfo *_songInfo;
    NSString *_savePath;
    int _httpStatus;
    NSFileHandle *_writeFileHandle;
}

+ (id)createSongInfOWithNet:(id)arg1 isWifi:(BOOL)arg2;
@property(retain) NSFileHandle *writeFileHandle; // @synthesize writeFileHandle=_writeFileHandle;
@property int httpStatus; // @synthesize httpStatus=_httpStatus;
@property(copy) NSString *savePath; // @synthesize savePath=_savePath;
@property BOOL isWifi; // @synthesize isWifi=_isWifi;
@property(retain) SongInfo *songInfo; // @synthesize songInfo=_songInfo;
- (void).cxx_destruct;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEActionSheetStyleDownload.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BEActionSheetStyleDownloadAll : BEActionSheetStyleDownload
{
    CDUnknownBlockType _successBlock;
    NSArray *_canDownload128Mp3Songs;
    NSArray *_canDownload320Mp3Songs;
    NSArray *_canDownloadFlacSongs;
}

@property(retain, nonatomic) NSArray *canDownloadFlacSongs; // @synthesize canDownloadFlacSongs=_canDownloadFlacSongs;
@property(retain, nonatomic) NSArray *canDownload320Mp3Songs; // @synthesize canDownload320Mp3Songs=_canDownload320Mp3Songs;
@property(retain, nonatomic) NSArray *canDownload128Mp3Songs; // @synthesize canDownload128Mp3Songs=_canDownload128Mp3Songs;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (int)getActionSheetTag;

@end

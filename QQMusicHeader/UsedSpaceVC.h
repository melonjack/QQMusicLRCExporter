//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "BEActionSheetDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"

@class BELoadingView, NSString;

__attribute__((visibility("hidden")))
@interface UsedSpaceVC : SkinViewController <UITableViewDataSource, UIActionSheetDelegate, BEActionSheetDelegate>
{
    NSString *_totalUsedSize;
    NSString *_offlineSongTotalSize;
    NSString *_downloadSongTotalSize;
    NSString *_downloadMVTotalSize;
    NSString *_albumAndSingerImageTotalSize;
    NSString *_lyricImageTotalSize;
    NSString *_recentSongTotalSize;
    NSString *_webCacheTotalSize;
    NSString *_firstPieceTotalSize;
    BELoadingView *_loadingView;
}

@property(retain, nonatomic) BELoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 actionSheetButtonClickedAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clickedButtonAtTag:(int)arg1;
- (void)showActionSheetTitle:(id)arg1 destructiveButtonTitle:(id)arg2 actionTag:(int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)_emptyFolder:(id)arg1 emptyDir:(BOOL)arg2;
- (void)_emptyRecentPlayList;
- (void)_clearFirstPieceCacheFolder;
- (void)_clearAllImageAndLyric:(id)arg1;
- (void)_clearAllDownloadMV;
- (void)_clearAllDownloadSongs;
- (long long)_calculateFolderSizeAtPath:(id)arg1;
- (id)_toLiteralSizeString:(long long)arg1;
- (void)_calculateUsedSpace;
- (id)getBgName;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


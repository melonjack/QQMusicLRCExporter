//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NewPlayingListBaseVC.h"

#import "NewPlayingCellTableViewCellDelegate.h"

@class NSArray, NSMutableArray, NSString, NewPlayingCellTableViewCell, SongInfo, UIViewController;

__attribute__((visibility("hidden")))
@interface NewPlayingListNormalVC : NewPlayingListBaseVC <NewPlayingCellTableViewCellDelegate>
{
    BOOL isSelectedPlay;
    BOOL _isPaues;
    NSArray *allSongs;
    UIViewController *_vcFrom;
    SongInfo *_currentPlayingSonginfo;
    NSMutableArray *_songs;
    unsigned int _songListInsertNextQueueIndex;
    NewPlayingCellTableViewCell *_currentPlayingCell;
    struct _NSRange _nextSongRange;
}

+ (id)sharedNewPlayingListNormalVC;
@property(retain, nonatomic) NewPlayingCellTableViewCell *currentPlayingCell; // @synthesize currentPlayingCell=_currentPlayingCell;
@property(nonatomic) BOOL isPaues; // @synthesize isPaues=_isPaues;
@property(nonatomic) unsigned int songListInsertNextQueueIndex; // @synthesize songListInsertNextQueueIndex=_songListInsertNextQueueIndex;
@property(retain, nonatomic) NSMutableArray *songs; // @synthesize songs=_songs;
@property(nonatomic) struct _NSRange nextSongRange; // @synthesize nextSongRange=_nextSongRange;
@property(retain, nonatomic) SongInfo *currentPlayingSonginfo; // @synthesize currentPlayingSonginfo=_currentPlayingSonginfo;
@property(retain, nonatomic) UIViewController *vcFrom; // @synthesize vcFrom=_vcFrom;
- (void)setAllSongs:(id)arg1;
- (id)allSongs;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onColorChange;
- (void)startPlayingAnimation;
- (void)stopPlayingAnimation;
- (void)onNotifyPlayingSongChange:(id)arg1;
- (void)setCurrentWhenChangeModel;
- (void)tryPlaySongWhenDeleted:(unsigned int)arg1;
- (void)deleteSong:(id)arg1;
- (void)prepareDeleteSong:(unsigned int)arg1;
- (BOOL)wantPlayAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)returnSingleRadio;
- (void)showPlayingCellMiddle;
- (void)reloadData;
- (void)updateUI:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL isShowing;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate.h"
#import "NewPlayingListBaseVCDelegate.h"
#import "QMMiniPlayerViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NewPlayingListNormalVC, NewPlayingListRadioVC, PlayList, QMMiniPlayerView, SongInfo, UIToolbar;

__attribute__((visibility("hidden")))
@interface QMMiniPlayerController : SkinViewController <QMMiniPlayerViewDelegate, ImageManagerDelegate, NewPlayingListBaseVCDelegate>
{
    BOOL isManualShowMiniPlay;
    SongInfo *lastPlaySong;
    UIToolbar *tempView;
    BOOL _isCanShow;
    BOOL _isLoadDefaultPlayList;
    BOOL _isBlackModel;
    BOOL _isLocalList;
    BOOL _isSlidedOnThisLife;
    NSMutableArray *_songListArray;
    QMMiniPlayerView *_miniPlayerView;
    SongInfo *_curPlayingSong;
    SongInfo *_preSong;
    SongInfo *_nextSong;
    id _delegate;
    NewPlayingListNormalVC *_playListNewVC;
    NewPlayingListRadioVC *_radioPlayListNewVC;
    NSArray *_currentPlayingSongList;
    PlayList *_playListObject;
    int _preIndex;
    int _nextIndex;
    NSMutableArray *_songs;
    int _lastLaunchCount;
}

+ (id)sharedMiniPlayerController;
@property(nonatomic) BOOL isSlidedOnThisLife; // @synthesize isSlidedOnThisLife=_isSlidedOnThisLife;
@property(nonatomic) int lastLaunchCount; // @synthesize lastLaunchCount=_lastLaunchCount;
@property(nonatomic) BOOL isLocalList; // @synthesize isLocalList=_isLocalList;
@property(nonatomic) BOOL isBlackModel; // @synthesize isBlackModel=_isBlackModel;
@property(retain, nonatomic) NSMutableArray *songs; // @synthesize songs=_songs;
@property(nonatomic) int nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) int preIndex; // @synthesize preIndex=_preIndex;
@property(retain, nonatomic) PlayList *playListObject; // @synthesize playListObject=_playListObject;
@property(retain, nonatomic) NSArray *currentPlayingSongList; // @synthesize currentPlayingSongList=_currentPlayingSongList;
@property(retain, nonatomic) NewPlayingListRadioVC *radioPlayListNewVC; // @synthesize radioPlayListNewVC=_radioPlayListNewVC;
@property(retain, nonatomic) NewPlayingListNormalVC *playListNewVC; // @synthesize playListNewVC=_playListNewVC;
@property(nonatomic) BOOL isLoadDefaultPlayList; // @synthesize isLoadDefaultPlayList=_isLoadDefaultPlayList;
@property(nonatomic) BOOL isCanShow; // @synthesize isCanShow=_isCanShow;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SongInfo *nextSong; // @synthesize nextSong=_nextSong;
@property(retain, nonatomic) SongInfo *preSong; // @synthesize preSong=_preSong;
@property(retain, nonatomic) SongInfo *curPlayingSong; // @synthesize curPlayingSong=_curPlayingSong;
@property(retain, nonatomic) QMMiniPlayerView *miniPlayerView; // @synthesize miniPlayerView=_miniPlayerView;
@property(retain, nonatomic) NSMutableArray *songListArray; // @synthesize songListArray=_songListArray;
- (void).cxx_destruct;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)clearAllSongs;
- (void)showMiniPlayerViewWhenClear;
- (void)miniPlayerShowPlayingView;
- (void)delayShowPlayingView;
- (void)showPlayingView;
- (void)refreshSongListTitleWhendeleteSong;
- (void)onNotifyNextSongsQueueChanged:(id)arg1;
- (void)onNotifyPlayModeChanged:(id)arg1;
- (id)getPlayingModeDescription:(int)arg1;
- (void)delayShowPlayList:(id)arg1;
- (void)showPlayList:(id)arg1;
- (void)initRadioPlayingListVC;
- (void)initPlayingListVC;
- (void)reportCommonRadioOperate:(int)arg1;
- (void)playPreSong:(id)arg1;
- (void)playNextSong:(id)arg1;
- (void)setSlidCount;
- (void)playOrPauseButtonPressed:(id)arg1;
- (void)openSongListFromToday;
- (void)autoPlayNextSong;
- (void)updateProgress:(float)arg1;
- (void)setSonginfoToSonginfoView;
- (void)tryStartMiniPlayerAlbumAnimation;
- (void)stopMiniPlayerAlbumAnimation;
- (void)refreshSongInfo;
- (void)updateMiniPlayerMusicInfo:(id)arg1 PlayList:(id)arg2 autoPlay:(BOOL)arg3;
- (void)getAllSongAndInsertSongs;
- (void)updateMiniPlayStateChage:(int)arg1 isLocalFile:(BOOL)arg2;
- (void)setPlayButtonPause;
- (void)setAlbumImage:(id)arg1 songName:(id)arg2 singerName:(id)arg3 viewIndex:(int)arg4;
- (void)hiddenMiniPlayer;
- (void)setMiniPlayerEmpty;
- (void)showMiniPlayerView:(BOOL)arg1;
- (void)delayShowMiniPlayer;
- (void)showMiniPlayerView;
- (BOOL)canShowPlayingWhenSwitchOpen;
- (void)clickEmptyMiniPlayer;
- (void)onColorStyleChanged;
- (void)loadView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

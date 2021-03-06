//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelBaseTabVC.h"

@class ChannelV4Category, SongListItem;

__attribute__((visibility("hidden")))
@interface RadioTabVC : ChannelBaseTabVC
{
    SongListItem *_playingRadioItem;
    SongListItem *_curLoadingRadioItem;
    ChannelV4Category *_selectedCategory;
}

@property(retain, nonatomic) ChannelV4Category *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
@property(retain, nonatomic) SongListItem *curLoadingRadioItem; // @synthesize curLoadingRadioItem=_curLoadingRadioItem;
@property(retain, nonatomic) SongListItem *playingRadioItem; // @synthesize playingRadioItem=_playingRadioItem;
- (void).cxx_destruct;
- (void)onNotifyPlayingSongChange:(id)arg1;
- (void)handleFetchRadioListStatus:(int)arg1 radioProtocol:(id)arg2 workResult:(int)arg3;
- (void)playRadio:(id)arg1;
- (void)requestToShowChannel:(id)arg1;
- (id)createFrom:(int)arg1;
- (id)getCurPlayingRadioItem;
- (id)getCurPlayingList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didClickCategoryBtn:(id)arg1;
- (void)_listDataDidUpdate:(id)arg1;
- (void)resetDefaultCategory;
- (void)serverChanged;
- (void)reFreshWithCategory:(id)arg1;
- (void)reFresh;
- (int)vcType;
- (void)willActiveCurrentTab;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end


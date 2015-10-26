//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchResultBaseVC.h"

#import "DownLoadEditProtocol.h"
#import "UITableViewDataSource.h"
#import "UITextFieldDelegate.h"

@class NSIndexPath, NSString, UIActivityIndicatorView, UIButton, UIImage, UITextField;

__attribute__((visibility("hidden")))
@interface MyMusicSearchViewController : SearchResultBaseVC <UITableViewDataSource, UITextFieldDelegate, DownLoadEditProtocol>
{
    NSIndexPath *tableCellSelectIndexPath;
    UIButton *searchCancleButton;
    UITextField *searchBarTextField;
    UIButton *searchTxtDelButton;
    _Bool bResultIsVoiceInput;
    UIActivityIndicatorView *_activityViewSearching;
    UIButton *_btnClear;
    UIImage *_imageTableBg;
    NSString *_lastSearchInput;
    id <MyMusicSearchViewControllerDelegate> _delegate;
}

@property __weak id <MyMusicSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *lastSearchInput; // @synthesize lastSearchInput=_lastSearchInput;
@property(retain) UIImage *imageTableBg; // @synthesize imageTableBg=_imageTableBg;
@property(retain) UIButton *btnClear; // @synthesize btnClear=_btnClear;
@property(retain) UIActivityIndicatorView *activityViewSearching; // @synthesize activityViewSearching=_activityViewSearching;
- (void).cxx_destruct;
- (id)getAllVCType;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_onNotifyTextFieldChanged:(id)arg1;
- (void)_onNotifyLocalSearchUpdate:(id)arg1;
- (void)onSongsEdit:(id)arg1;
- (void)onEditDone:(id)arg1 deletedObjects:(id)arg2 withDeleteBlock:(CDUnknownBlockType)arg3;
- (void)handleCellLongPress:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_reCreateAttributedText:(id)arg1;
- (BOOL)showDelBtnInActionSheet:(id)arg1;
- (void)newActionSheet:(id)arg1;
- (void)_updateUI;
- (void)_setCellLabelToOHAttributedLabel:(id)arg1;
- (id)_createOHAttributedLabel:(id)arg1;
- (id)getSongInfoAtIndexPath:(id)arg1;
- (void)cleanResult;
- (void)viewDidPop;
- (void)_showEmptyResult;
- (void)_onTouchUpInsideSearch:(id)arg1;
- (void)onTouchUpInsideCancelSearch:(id)arg1;
- (void)appearHeaderWithAnimation;
- (void)searchTextChanged:(id)arg1;
- (void)searchTextFieldTouchDown:(id)arg1;
- (void)reFresh;
- (void)beginSearch:(id)arg1;
- (void)cancleKeyboard;
- (void)dismissSearchResultView:(BOOL)arg1;
- (void)resetDelBtnStatus;
- (void)clearSearchText:(id)arg1;
- (void)createSearchHeaderView;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

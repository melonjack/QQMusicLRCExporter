//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchResultBaseTabVC.h"

__attribute__((visibility("hidden")))
@interface SearchSongTabVC : SearchResultBaseTabVC
{
}

- (void)onTouchUpInsideFeedback:(id)arg1;
- (void)loadMoreVerisons:(id)arg1;
- (void)addMutliVersionInfoWithCell:(id)arg1 indexPath:(id)arg2;
- (void)reSetCell:(id)arg1 withBgColor:(id)arg2;
- (id)fillSongCell:(id)arg1 indexPath:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)showFeedbackView;
- (void)actionSheet:(id)arg1 actionSheetButtonClickedAtIndex:(int)arg2;
- (void)tableViewSelectedAtIndexPath:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showEmptyView;
- (BOOL)showDelBtnInActionSheet:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (int)vcType;
- (id)initWithClusterInfo:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


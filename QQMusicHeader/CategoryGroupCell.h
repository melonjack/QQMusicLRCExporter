//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MusicListCategoryGroup, UIView;

__attribute__((visibility("hidden")))
@interface CategoryGroupCell : UITableViewCell
{
    UIView *_containerView;
    id <CategoryGroupCellDelegate> _delegate;
    MusicListCategoryGroup *_categoryGroup;
}

+ (float)heightForCategoryGroup:(id)arg1;
@property(retain, nonatomic) MusicListCategoryGroup *categoryGroup; // @synthesize categoryGroup=_categoryGroup;
@property(nonatomic) __weak id <CategoryGroupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_btnClicked:(id)arg1;
- (struct CGRect)_btnFrameForIndex:(unsigned int)arg1;
- (void)updateUI;
- (id)initWithDelegate:(id)arg1;
- (id)reuseIdentifier;

@end


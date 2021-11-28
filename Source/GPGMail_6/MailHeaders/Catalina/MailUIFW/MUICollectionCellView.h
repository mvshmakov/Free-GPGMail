//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSView.h>

@class NSLayoutConstraint, NSViewController;

@interface MUICollectionCellView : NSView
{
    BOOL _emphasized;
    BOOL _focused;
    BOOL _selected;
    unsigned long long _cellIndex;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_midXConstraint;
    NSLayoutConstraint *_minYConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *minYConstraint; // @synthesize minYConstraint=_minYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *midXConstraint; // @synthesize midXConstraint=_midXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
//- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)_enclosingConversationView;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)prepareForReuse;
- (BOOL)isFlipped;
@property(readonly, nonatomic) __weak NSViewController *viewController;
- (void)_muiCollectionCellViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)collectionView:(id)arg1 didEndScrollInScrollView:(id)arg2;
- (void)collectionView:(id)arg1 didScrollInScrollView:(id)arg2;
- (void)collectionView:(id)arg1 didBeginScrollInScrollView:(id)arg2;

@end

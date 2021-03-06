//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1StatusTableRowAdapter.h>

@protocol T1TweetDetailsFocalStatusTableRowAdapterDelegate;

@interface T1TweetDetailsFocalStatusTableRowAdapter : T1StatusTableRowAdapter
{
    id <T1TweetDetailsFocalStatusTableRowAdapterDelegate> _delegate;
}

+ (Class)statusCellClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <T1TweetDetailsFocalStatusTableRowAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_updateFocalStatusCellIfLayoutIsInvalidForViewModel:(id)arg1;
- (void)tableViewController:(id)arg1 performLivePipelineUpdateForViewModel:(id)arg2;
- (id)scribeParametersForObject:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (id)tableViewCellReuseIdentifierForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (unsigned long long)tableViewController:(id)arg1 statusOptionsForViewModel:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2 forAllInstancesInTableViewController:(id)arg3;

@end


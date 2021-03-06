//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class ASCellNode, NSString;
@protocol ASRangeManagingNode;

@interface ASCollectionElement : NSObject <NSCopying>
{
    // Error parsing type: {Mutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: _lock
    ASCellNode *_node;
    NSString *_supplementaryElementKind;
    id <ASRangeManagingNode> _owningNode;
    id _nodeModel;
    CDUnknownBlockType _nodeBlock;
    CDStruct_42a63532 _constrainedSize;
    CDStruct_104667ad _traitCollection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType nodeBlock; // @synthesize nodeBlock=_nodeBlock;
@property(readonly, nonatomic) id nodeModel; // @synthesize nodeModel=_nodeModel;
@property(nonatomic) CDStruct_104667ad traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) __weak id <ASRangeManagingNode> owningNode; // @synthesize owningNode=_owningNode;
@property(nonatomic) CDStruct_42a63532 constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(readonly, copy, nonatomic) NSString *supplementaryElementKind; // @synthesize supplementaryElementKind=_supplementaryElementKind;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) ASCellNode *nodeIfAllocated;
@property(readonly) ASCellNode *node;
- (id)initWithNodeModel:(id)arg1 nodeBlock:(CDUnknownBlockType)arg2 supplementaryElementKind:(id)arg3 constrainedSize:(CDStruct_42a63532)arg4 owningNode:(id)arg5 traitCollection:(CDStruct_104667ad)arg6;

@end


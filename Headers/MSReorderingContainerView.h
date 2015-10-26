#import "NSView.h"

@class NSArray;

@interface MSReorderingContainerView : NSView
{
    long long sourceDragIndex;
    id <MSReorderingContainerDelegate> _delegate;
    long long _direction;
    NSArray *_subViewDestinationFrames;
}

@property(retain, nonatomic) NSArray *subViewDestinationFrames; // @synthesize subViewDestinationFrames=_subViewDestinationFrames;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) __weak id <MSReorderingContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (double)startOffsetForStacking;
- (id)destinationFramesForSubviewsForAxis:(id)arg1;
- (void)reorderSubviewsAnimated:(BOOL)arg1;
- (id)draggingView;
- (unsigned long long)numberOfReorderableSubviews;
- (long long)hoverIndexForDraggingInfo:(id)arg1;
- (void)moveDraggedViewToRowAtIndex:(long long)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

#pragma once
#include <cstddef>

namespace DataCache { namespace Details {
    class DataCache;
}}

namespace DataCache { namespace Testing {

    // A test helper for getting access to private data on the <DataCache>
    class DataCacheAccessor
    {
    public:
        DataCacheAccessor(Details::DataCache& cache);
        void clear(void);

        std::size_t size(void) const;
        
    private:
        Details::DataCache& cache_;
    };
}}

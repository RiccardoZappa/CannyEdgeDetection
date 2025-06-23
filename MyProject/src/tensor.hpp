#include <memory>

template <typename T, size_t... Dims>
class Tensor 
{
    public:
        Tensor() : m_data(calculateSize());

    private:

        static constexpr size_t calculateSize()
        {
            return (Dims * ... * 1);
        }

        std::unique_ptr<std::vector<T>> m_data;
};
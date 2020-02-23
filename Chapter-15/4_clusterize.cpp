struct Object
{
  int color;
  int shape;
  int width;
  int height;
};

using objects_list = std::vector<Object>;
using categorized_table = std::unordered_map<int, objects_list>;

categorized_table clusterize(const objects_list& objects)
{
  categorized_table result;
  for (const auto& obj : objects) {
    result[obj.color].push_back(obj);
    result[obj.shape].push_back(obj);
  }
  return result;
}